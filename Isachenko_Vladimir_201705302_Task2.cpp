#define _CRT_SECURE_NO_WARNINGS
#include "Isachenko_Vladimir_201705302_Task2.h"

namespace mvms_2017
{
	Isachenko_Vladimir_201705302_Task2::Isachenko_Vladimir_201705302_Task2() : Task2(true)
	{
	}

	Isachenko_Vladimir_201705302_Task2::Isachenko_Vladimir_201705302_Task2(bool verbose) : Task2(verbose)
	{
	}

	int Isachenko_Vladimir_201705302_Task2::variant()
	{
		return VARIANT_NUMBER;
	}
	std::string Isachenko_Vladimir_201705302_Task2::getFirstName()
	{
		return FIRST_NAME;
	}
	std::string Isachenko_Vladimir_201705302_Task2::getSecondName()
	{
		return LAST_NAME;
	}

	cv::Mat Isachenko_Vladimir_201705302_Task2::addnoises(cv::Mat image, float sigma, int solt_prob, int papper_prob)
	{
		int H = image.rows, W = image.cols;

		cv::Mat result = image.clone();
		cv::RNG rng;

		// gauss noise
		for (int i = 0; i < H; i++)
		{
			for (int j = 0; j < W; j++)
			{
				int randInt = (int) (rng.gaussian(sigma) + 0.5);
				int val = randInt + result.at<uchar>(cv::Point(i, j));
				val = std::min(val, 255);
				val = std::max(val, 0);
				result.at<uchar>(cv::Point(i, j)) = val;
			}
		}
		
		// salt&pepper noise
		for (int i = 0; i < H; i++)
		{
			for (int j = 0; j < W; j++)
			{
				int randInt = rng.uniform(0, 255);
				if (randInt > solt_prob)
				{
					result.at<uchar>(cv::Point(i, j)) = 255;
				}
				if (randInt < papper_prob)
				{
					result.at<uchar>(cv::Point(i, j)) = 0;
				}
			}
		}
		return result;
	}
}
