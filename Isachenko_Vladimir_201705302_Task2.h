#pragma once
#include "task2.h"

namespace mvms_2017
{
	class Isachenko_Vladimir_201705302_Task2 : public Task2
	{
	private:
		const int VARIANT_NUMBER = 201705302;
		const std::string FIRST_NAME = "Владимир";
		const std::string LAST_NAME = "Исаченко";

	public:
		Isachenko_Vladimir_201705302_Task2();
		Isachenko_Vladimir_201705302_Task2(bool verbose);

		int variant() override;
		std::string getFirstName() override;
		std::string getSecondName() override;
		cv::Mat addnoises(cv::Mat image, float sigma, int solt_prob, int papper_prob) override;
	};
}