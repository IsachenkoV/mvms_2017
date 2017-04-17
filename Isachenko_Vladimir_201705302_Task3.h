#pragma once
#include "task3.h"

namespace mvms_2017
{
	class Isachenko_Vladimir_201705302_Task3 : public Task3
	{
	private:
		const int VARIANT_NUMBER = 201705302;
		const std::string FIRST_NAME = "Владимир";
		const std::string LAST_NAME = "Исаченко";
		bool isOnBorder(cv::Mat img, int x, int y, int k);

	public:
		Isachenko_Vladimir_201705302_Task3();
		Isachenko_Vladimir_201705302_Task3(bool verbose);

		int variant() override;
		std::string getFirstName() override;
		std::string getSecondName() override;

		//Реализовать алгоритм расчета расстояния до границы (Distance transform)
		cv::Mat distanceTransform(cv::Mat binimage) override;
	};
}