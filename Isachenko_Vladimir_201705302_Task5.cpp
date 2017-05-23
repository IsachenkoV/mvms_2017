#define _CRT_SECURE_NO_WARNINGS
#include "Isachenko_Vladimir_201705302_Task5.h"

namespace mvms_2017
{
	using cv::Mat;
	using cv::Point3f;

	Isachenko_Vladimir_201705302_Task5::Isachenko_Vladimir_201705302_Task5() : Task5(true)
	{
	}

	Isachenko_Vladimir_201705302_Task5::Isachenko_Vladimir_201705302_Task5(bool verbose) : Task5(verbose)
	{
	}

	int Isachenko_Vladimir_201705302_Task5::variant()
	{
		return VARIANT_NUMBER;
	}
	std::string Isachenko_Vladimir_201705302_Task5::getFirstName()
	{
		return FIRST_NAME;
	}
	std::string Isachenko_Vladimir_201705302_Task5::getSecondName()
	{
		return LAST_NAME;
	}

	float scalar_mul(Point3f a, Point3f b)
	{
		return a.x * b.x + a.y * b.y + a.z * b.z;
	}

	Point3f Isachenko_Vladimir_201705302_Task5::raysIntersection(Point3f pt1, Point3f ray1, Point3f pt2, Point3f ray2)
	{
		Point3f u = ray1 - pt1, v = ray2 - pt2, w = pt1 - pt2;

		float a = scalar_mul(u, u);
		float b = scalar_mul(u, v);
		float c = scalar_mul(v, v);
		float d = scalar_mul(u, w);
		float e = scalar_mul(v, w);

		float Q = a * c - b * b;
		float sN, sD = Q;
		float tN, tD = Q;

		if (Q < EPS)
		{
			sN = 0.0;
			sD = 1.0;
			tN = e;
			tD = c;
		}
		else
		{
			sN = (b * e - c * d);
			tN = (a * e - b * d);
		}

		// check if points lays before start of rays
		if (sN < 0.0) 
		{
			sN = 0.0;
			tN = e;
			tD = c;
		}
		if (tN < 0.0)
		{
			tN = 0.0;
			if (-d < 0.0)
				sN = 0.0;
			else if (-d > a)
				sN = sD;
			else
			{
				sN = -d;
				sD = a;
			}
		}

		// vector params
		float param1 = (abs(sN) < EPS ? 0.0 : sN / sD);
		float param2 = (abs(tN) < EPS ? 0.0 : tN / tD);

		Point3f point_on_ray1 = pt1 + param1 * u;
		Point3f point_on_ray2 = pt2 + param2 * v;
		return (point_on_ray1 + point_on_ray2) / 2;
	}
}
