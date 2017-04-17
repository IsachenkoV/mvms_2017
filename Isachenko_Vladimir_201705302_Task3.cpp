#define _CRT_SECURE_NO_WARNINGS
#include "Isachenko_Vladimir_201705302_Task3.h"

namespace mvms_2017
{
	Isachenko_Vladimir_201705302_Task3::Isachenko_Vladimir_201705302_Task3() : Task3(true)
	{
	}

	Isachenko_Vladimir_201705302_Task3::Isachenko_Vladimir_201705302_Task3(bool verbose) : Task3(verbose)
	{
	}

	int Isachenko_Vladimir_201705302_Task3::variant()
	{
		return VARIANT_NUMBER;
	}
	std::string Isachenko_Vladimir_201705302_Task3::getFirstName()
	{
		return FIRST_NAME;
	}
	std::string Isachenko_Vladimir_201705302_Task3::getSecondName()
	{
		return LAST_NAME;
	}

	bool Isachenko_Vladimir_201705302_Task3::isOnBorder(cv::Mat img, int x, int y, int k)
	{
		int dx[] = { 0, 0, -1, 1 };
		int dy[] = { 1, -1, 0, 0 };

		for (int d = 0; d < 4; d++)
		{
			int curx = x + dx[d];
			int cury = y + dy[d];

			if (curx >= 0 && curx < img.cols && cury >= 0 && cury < img.rows)
			{
				int tmp = img.at<uchar>(cv::Point(curx, cury));
				if (tmp == k)
					return true;
			}
		}
		return false;
	}

	cv::Mat Isachenko_Vladimir_201705302_Task3::distanceTransform(cv::Mat binimage)
	{
		cv::Mat result = binimage.clone();

		int H = binimage.cols, W = binimage.rows;

		// get border
		for (int i = 0; i < H; i++)
		{
			for (int j = 0; j < W; j++)
			{
				uchar cur = binimage.at<uchar>(cv::Point(i, j));
				if (cur != 0)
				{
					bool flag = isOnBorder(binimage, i, j, 0);
					if (i == 0 || i == H - 1 || j == 0 || j == W - 1 || flag)
						result.at<uchar>(cv::Point(i, j)) = 1;
					else
						result.at<uchar>(cv::Point(i, j)) = 0;
				}
			}
		}

		int MAXITER = std::min(H, W);
		for (int t = 1; t < MAXITER; t++)
		{
			bool haveChanges = false;
			for (int i = 0; i < H; i++)
			{
				for (int j = 0; j < W; j++)
				{
					uchar cur = binimage.at<uchar>(cv::Point(i, j));
					if (cur != 0 && result.at<uchar>(cv::Point(i, j)) == 0)
					{
						if (isOnBorder(result, i, j, t))
						{
							result.at<uchar>(cv::Point(i, j)) = std::min(t + 1, 255);
							haveChanges = true;
						}
					}
				}
			}
			if (!haveChanges)
				break;
		}

		return result;
	}

}
