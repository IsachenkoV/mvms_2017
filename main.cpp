#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "task4.h"
#include "task5.h"

#include "Isachenko_Vladimir_201705302_Task1.h"
#include "Isachenko_Vladimir_201705302_Task2.h"
#include "Isachenko_Vladimir_201705302_Task3.h"
#include "Isachenko_Vladimir_201705302_Task4.h"
#include "Isachenko_Vladimir_201705302_Task5.h"

int main(int argc, char *argv[])
{
	mvms_2017::Isachenko_Vladimir_201705302_Task5 my_class;

	try
	{
		cv::Point3f pp1 = my_class.raysIntersection(cv::Point3f(5, 7, 4), cv::Point3f(9, 17, 16), cv::Point3f(7, 14, 2), cv::Point3f(7, 10, 18));
		cv::Point3f pp21 = my_class.raysIntersection(cv::Point3f(7, 12, 10), cv::Point3f(9, 17, 16), cv::Point3f(7, 12, 10), cv::Point3f(7, 10, 18));
		cv::Point3f pp3 = my_class.raysIntersection(cv::Point3f(7.4, 13.0, 11.2), cv::Point3f(9, 17, 16), cv::Point3f(7, 12, 10), cv::Point3f(7, 10, 18));
		cv::Point3f pp2 = my_class.raysIntersection(cv::Point3f(5, 4, 0), cv::Point3f(5, 6, 0), cv::Point3f(7, 6, 0), cv::Point3f(7, 10, 0));
		cv::waitKey(0);
    }
	catch(std::exception ex)
	{
        std::cout << ex.what() << std::endl;
    }

    return 0;
}
