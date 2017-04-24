#pragma once
#include "task4.h"

namespace mvms_2017
{
	class Isachenko_Vladimir_201705302_Task4 : public Task4
	{
	private:
		const int VARIANT_NUMBER = 201705302;
		const std::string FIRST_NAME = "Владимир";
		const std::string LAST_NAME = "Исаченко";

	public:
		Isachenko_Vladimir_201705302_Task4();
		Isachenko_Vladimir_201705302_Task4(bool verbose);

		int variant() override;
		std::string getFirstName() override;
		std::string getSecondName() override;

		/*!
		* \brief Harris Реализовать детектор особых точек Харриса
		* \param grayimage серое изображение
		* \param window_size размер окна
		* \return значение
		*/
		cv::Mat Harris(cv::Mat grayimage, int window_size) override;
	};
}