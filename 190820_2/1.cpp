#include<iostream>
#include<opencv2/opencv.hpp>
using namespace std;
using namespace cv;
int main()
{
	Mat img = imread("1.jpg");
	imshow("qwe",img);
	Mat dstImage;
	blur(img,dstImage,Size(7,7));
	imshow("qwe1", dstImage);
	waitKey(0);
	return 0;
}