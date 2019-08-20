#include<iostream>
#include<opencv2/opencv.hpp>
#include<opencv2/imgproc.hpp>
using namespace std;
using namespace cv;
int main()
{
	
	VideoCapture v(0);
	while(1){
		Mat frame,gray_img,blur_img,canny_img;
		v >> frame;
		imshow("test", frame);
		cvtColor(frame, gray_img, COLOR_BGR2GRAY);
		blur(gray_img, blur_img, Size(3, 3));
		Canny(blur_img,canny_img,50,150,3);
		imshow("dst", canny_img);
		waitKey(10);
	}
	return 0;
}