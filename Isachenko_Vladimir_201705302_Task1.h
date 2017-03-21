#pragma once
#include "task1.h"

namespace mvms_2017
{
	class Isachenko_Vladimir_201705302_Task1 : public Task1
	{
	private:
		const int VARIANT_NUMBER = 201705302;
		const std::string FIRST_NAME = "��������";
		const std::string LAST_NAME = "��������";
		const static int WHITE = 255;
		void drawpixel(cv::Mat& img, int x, int y, int color);

	public:
		Isachenko_Vladimir_201705302_Task1();
		Isachenko_Vladimir_201705302_Task1(bool verbose);

		int variant() override;
		std::string getFirstName() override;
		std::string getSecondName() override;

		cv::Mat drawCircle(std::string filename, float x, float y, float r) override;
	};
}
