#define _CRT_SECURE_NO_WARNINGS
#include "Isachenko_Vladimir_201705302_Task4.h"

namespace mvms_2017
{
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

	cv::Mat Isachenko_Vladimir_201705302_Task4::Harris(cv::Mat grayimage, int window_size)
	{
		return cv::Mat();
	}
}
