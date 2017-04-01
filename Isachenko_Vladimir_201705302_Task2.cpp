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

	/*!
	* \brief addnoises Наложить на изображение нормальный шум с заданной дисперсией и средним значением и шум соль/перец.
	* \param image Изображение
	* \param sigma Дисперсия нормального шума
	* \param solt_prob Вероятность получения белого пикселя из равномерного распределения
	* \param papper_prob Вероятность получения черного пикселя из равномерного распределения
	* \return
	*/
	cv::Mat Isachenko_Vladimir_201705302_Task2::addnoises(cv::Mat image, float sigma, int solt_prob, int papper_prob)
	{
		cv::Mat result = image.clone();



		return result;
	}


}
