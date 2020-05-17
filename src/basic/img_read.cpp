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

	// 画像の表示
	cv::namedWindow("image", cv::WINDOW_AUTOSIZE);
	cv::imshow("image", img);

	// キー入力を待機
	cv::waitKey(0);

	// 作成したウィンドウを全て破棄
	cv::destroyAllWindows();
}

#if 1
int main()
{
	read_image();
	
	return 0;
}
#endif
