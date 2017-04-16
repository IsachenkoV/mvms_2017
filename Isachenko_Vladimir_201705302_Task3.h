#include "task3.h"

namespace mvms_2017
{
	class Isachenko_Vladimir_201705302_Task3 : public Task3
	{
	private:
		const int VARIANT_NUMBER = 201705302;

	public:
		Isachenko_Vladimir_201705302_Task3();
		Isachenko_Vladimir_201705302_Task3(bool verbose);

		int variant() override;
		std::string getFirstName() override;
		std::string getSecondName() override;

		cv::Mat distanceTransform(cv::Mat binimage) override;
	};
}
