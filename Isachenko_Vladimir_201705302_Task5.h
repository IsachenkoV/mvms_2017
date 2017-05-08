#pragma once
#include "task5.h"

namespace mvms_2017
{
	class Isachenko_Vladimir_201705302_Task5 : public Task5
	{
	private:
		const int VARIANT_NUMBER = 201705302;
		const std::string FIRST_NAME = "Владимир";
		const std::string LAST_NAME = "Исаченко";

	public:
		Isachenko_Vladimir_201705302_Task5();
		Isachenko_Vladimir_201705302_Task5(bool verbose);

		int variant() override;
		std::string getFirstName() override;
		std::string getSecondName() override;
		/*!
		* \brief raysIntersection Алгоритм нахождения пересечения двух лучей в 3Д пространстве
		* \param pt1 точка 1
		* \param ray1 луч 1
		* \param pt2 точка 2
		* \param ray2 луч 2
		* \return точка пересечения
		*/
		cv::Point3f raysIntersection(cv::Point3f pt1, cv::Point3f ray1, cv::Point3f pt2, cv::Point3f ray2) override;
	};
}