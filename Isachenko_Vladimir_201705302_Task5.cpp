#define _CRT_SECURE_NO_WARNINGS
#include "Isachenko_Vladimir_201705302_Task5.h"

namespace mvms_2017
{
	using cv::Mat;
	using cv::Point;

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

	cv::Point3f Isachenko_Vladimir_201705302_Task5::raysIntersection(cv::Point3f pt1, cv::Point3f ray1, cv::Point3f pt2, cv::Point3f ray2)
	{
		return cv::Point3f();
	}
}
