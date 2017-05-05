#define _CRT_SECURE_NO_WARNINGS
#include "Isachenko_Vladimir_201705302_Task4.h"

namespace mvms_2017
{
	using cv::Mat;
	using cv::Point;

	Isachenko_Vladimir_201705302_Task4::Isachenko_Vladimir_201705302_Task4() : Task4(true)
	{
	}

	Isachenko_Vladimir_201705302_Task4::Isachenko_Vladimir_201705302_Task4(bool verbose) : Task4(verbose)
	{
	}

	int Isachenko_Vladimir_201705302_Task4::variant()
	{
		return VARIANT_NUMBER;
	}
	std::string Isachenko_Vladimir_201705302_Task4::getFirstName()
	{
		return FIRST_NAME;
	}
	std::string Isachenko_Vladimir_201705302_Task4::getSecondName()
	{
		return LAST_NAME;
	}

	Mat Isachenko_Vladimir_201705302_Task4::Harris(Mat grayimage, int window_size)
	{
		const float k = 0.04f;

		// compute derivatives
		int R = grayimage.rows, C = grayimage.cols;
		Mat Ix = Mat(R, C, CV_8UC1);
		Mat Iy = Mat(R, C, CV_8UC1);
		cv::Sobel(grayimage, Ix, CV_8UC1, 1, 0);
		cv::Sobel(grayimage, Iy, CV_8UC1, 0, 1);

		// compute matrix M
		int half_window = window_size / 2;
		float norm = 1.0f / (window_size * window_size);
		Mat no_thrsh = Mat(R, C, CV_32FC1);
		for (int r = 0; r < R; r++)
		{
			for (int c = 0; c < C; c++)
			{
				float a11 = 0.f, a12 = 0.f, a21 = 0.f, a22 = 0.f;

				for (int dx = -half_window; dx <= half_window; dx++)
				{
					for (int dy = -half_window; dy <= half_window; dy++)
					{
						int cr = r + dx, cc = c + dy;
						if (cr < 0 || cc < 0 || cr >= R || cc >= C)
							continue;

						a11 += norm * Ix.at<uchar>(cv::Point(cc, cr)) * Ix.at<uchar>(cv::Point(cc, cr));
						a22 += norm * Iy.at<uchar>(cv::Point(cc, cr)) * Iy.at<uchar>(cv::Point(cc, cr));
						a21 += norm * Ix.at<uchar>(cv::Point(cc, cr)) * Iy.at<uchar>(cv::Point(cc, cr));
						a12 += norm * Ix.at<uchar>(cv::Point(cc, cr)) * Iy.at<uchar>(cv::Point(cc, cr));
					}
				}

				float det = a11*a22 - a12*a21;
				float trace = a11 + a22;

				no_thrsh.at<float>(cv::Point(c, r)) = (det - k * trace*trace);
			}
		}

		Mat result = no_thrsh.clone();
		for (int r = 0; r < R; r++)
		{
			for (int c = 0; c < C; c++)
			{
				for (int dx = -half_window; dx <= half_window; dx++)
				{
					for (int dy = -half_window; dy <= half_window; dy++)
					{
						int cr = r + dx, cc = c + dy;
						if (cr < 0 || cc < 0 || cr >= R || cc >= C)
							continue;
						if (no_thrsh.at<float>(Point(c, r)) < no_thrsh.at<float>(Point(cc, cr)))
						{
							result.at<float>(Point(c, r)) = 0.f;
						}
					}
				}
			}
		}

		return result;
	}
}
