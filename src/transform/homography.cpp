// OpenCVRunJikken.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

//#include "stdafx.h"

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp> // getPerspectiveTransform()
#include <iostream>

static void trans_homography()
{
	// 画像の読み込み
	cv::Mat src = cv::imread("test.png");
	const cv::Point2f src_pos[] = {
		cv::Point2f(0+50,0), // 左上
		cv::Point2f(0,512), // 左下
		cv::Point2f(512-50,0), // 右上
		cv::Point2f(512,512) // 右下
	};

	// 変換後の画像を初期化
	cv::Mat dst = cv::Mat::zeros(src.rows+100,src.cols+100,CV_8UC3);
	const cv::Point2f dst_pos[] = {
		cv::Point2f(0+50,0+50), // 左上
		cv::Point2f(0+50,512-50), // 左下
		cv::Point2f(512-50,0+50), // 右上
		cv::Point2f(512-50,512-50) // 右下
	};

	// homography行列を計算
	const cv::Mat homography = cv::getPerspectiveTransform(src_pos,dst_pos);

	// 透視変換
	cv::warpPerspective( src, dst, homography,dst.size());

	// 画像の表示
	cv::namedWindow("image", cv::WINDOW_AUTOSIZE);
	cv::imshow("image", dst);

	// キー入力を待機
	cv::waitKey(0);

	// 作成したウィンドウを全て破棄
	cv::destroyAllWindows();
}

#if 1
int main()
{
	trans_homography();
	
	return 0;
}
#endif
