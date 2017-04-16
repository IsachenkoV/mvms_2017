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

	cv::Mat Isachenko_Vladimir_201705302_Task3::distanceTransform(cv::Mat binimage)
	{
		return cv::Mat();
	}

}
