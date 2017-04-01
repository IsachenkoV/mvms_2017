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
	* \brief addnoises �������� �� ����������� ���������� ��� � �������� ���������� � ������� ��������� � ��� ����/�����.
	* \param image �����������
	* \param sigma ��������� ����������� ����
	* \param solt_prob ����������� ��������� ������ ������� �� ������������ �������������
	* \param papper_prob ����������� ��������� ������� ������� �� ������������ �������������
	* \return
	*/
	cv::Mat Isachenko_Vladimir_201705302_Task2::addnoises(cv::Mat image, float sigma, int solt_prob, int papper_prob)
	{
		cv::Mat result = image.clone();



		return result;
	}


}
