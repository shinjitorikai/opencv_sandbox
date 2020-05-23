// OpenCVRunJikken.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

//#include "stdafx.h"

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

static void read_image()
{
	cv::Mat img;

	// 画像の読み込み
	img = cv::imread("test.png");

	// 画素値を取得
	int row = 0;
	int col = 0;
	std::cout << "mat.at<cv::Vec3b>(row,col)" << std::endl;
	// 3chの場合
	std::cout << " - B : " << (int)img.at<cv::Vec3b>(row,col)[0] << std::endl;
	std::cout << " - G : " << (int)img.at<cv::Vec3b>(row,col)[1] << std::endl;
	std::cout << " - R : " << (int)img.at<cv::Vec3b>(row,col)[2] << std::endl;
	// 1chの場合(グレースケール)
	//std::cout << " - B : " << (int)img.at<unsigned char>(row,col) << std::endl;

#if 0
	// 画像の表示
	cv::namedWindow("image", cv::WINDOW_AUTOSIZE);
	cv::imshow("image", img);

	// キー入力を待機
	cv::waitKey(0);

	// 作成したウィンドウを全て破棄
	cv::destroyAllWindows();
#endif
}

#if 1
int main()
{
	read_image();
	
	return 0;
}
#endif
