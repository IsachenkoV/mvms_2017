#pragma once
#include "task4.h"

namespace mvms_2017
{
	class Isachenko_Vladimir_201705302_Task4 : public Task4
	{
	private:
		const int VARIANT_NUMBER = 201705302;
		const std::string FIRST_NAME = "��������";
		const std::string LAST_NAME = "��������";

	public:
		Isachenko_Vladimir_201705302_Task4();
		Isachenko_Vladimir_201705302_Task4(bool verbose);

		int variant() override;
		std::string getFirstName() override;
		std::string getSecondName() override;

		/*!
		* \brief Harris ����������� �������� ������ ����� �������
		* \param grayimage ����� �����������
		* \param window_size ������ ����
		* \return ��������
		*/
		cv::Mat Harris(cv::Mat grayimage, int window_size) override;
	};
}