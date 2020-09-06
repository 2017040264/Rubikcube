#define aa
#ifdef aa

#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;

int OpenCamera()
{
	VideoCapture cap;
	cap.open(0);

	if (!cap.isOpened())
	{
		cerr << "Could't open capture" << endl;
		return -1;
	}

	Mat frame;
	// 接收键盘上的输入
	char keyCode;

	while (1)
	{

		cap >> frame;
		if (frame.empty())
		{
			break;
		}
		
		circle(frame, Point(200, 200), 10, Scalar(0, 0, 0), 1);
		circle(frame, Point(260, 200), 10, Scalar(0, 0, 0), 1);
		circle(frame, Point(320, 200), 10, Scalar(0, 0, 0), 1);

		circle(frame, Point(200, 260), 10, Scalar(0, 0, 0), 1);
		circle(frame, Point(260, 260), 10, Scalar(0, 0, 0), 1);
		circle(frame, Point(320, 260), 10, Scalar(0, 0, 0), 1);

		circle(frame, Point(200, 320), 10, Scalar(0, 0, 0), 1);
		circle(frame, Point(260, 320), 10, Scalar(0, 0, 0), 1);
		circle(frame, Point(320, 320), 10, Scalar(0, 0, 0), 1);
		
		/*circle(frame, Point(150, 150), 10, Scalar(0, 0, 0), 1);
		circle(frame, Point(250, 150), 10, Scalar(0, 0, 0), 1);
		circle(frame, Point(350, 150), 10, Scalar(0, 0, 0), 1);

		circle(frame, Point(150, 250), 10, Scalar(0, 0, 0), 1);
		circle(frame, Point(250, 250), 10, Scalar(0, 0, 0), 1);
		circle(frame, Point(350, 250), 10, Scalar(0, 0, 0), 1);

		circle(frame, Point(150, 350), 10, Scalar(0, 0, 0), 1);
		circle(frame, Point(250, 350), 10, Scalar(0, 0, 0), 1);
		circle(frame, Point(350, 350), 10, Scalar(0, 0, 0), 1);*/
		// 把每一帧图片表示出来
		imshow("摄像头", frame);
		// 在30毫秒内等待是否存在键盘输入，什么意思？
		keyCode = waitKey(30);
		if (keyCode == '1')
		{
			imwrite("1.jpg", frame);
			frame.release();
		}
		else if (keyCode == '2')
		{
			imwrite("2.jpg", frame);
			frame.release();
		}
		else if (keyCode == '3')
		{
			imwrite("3.jpg", frame);
			frame.release();
		}
		else if (keyCode == '4')
		{
			imwrite("4.jpg", frame);
			frame.release();
		}
		else if (keyCode == '5')
		{
			imwrite("5.jpg", frame);
			frame.release();
		}
		else if (keyCode == '6')
		{
			imwrite("6.jpg", frame);
			frame.release();
		}
		else if (keyCode == 27)
		{
			break;
		}
	}
	return 0;
}
#endif 
