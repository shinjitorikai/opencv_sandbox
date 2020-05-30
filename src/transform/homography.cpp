// OpenCVRunJikken.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

//#include "stdafx.h"

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp> // getPerspectiveTransform()
#include <iostream>

static void trans_homography()
{
	// �摜�̓ǂݍ���
	cv::Mat src = cv::imread("test.png");
	const cv::Point2f src_pos[] = {
		cv::Point2f(0+50,0), // ����
		cv::Point2f(0,512), // ����
		cv::Point2f(512-50,0), // �E��
		cv::Point2f(512,512) // �E��
	};

	// �ϊ���̉摜��������
	cv::Mat dst = cv::Mat::zeros(src.rows+100,src.cols+100,CV_8UC3);
	const cv::Point2f dst_pos[] = {
		cv::Point2f(0+50,0+50), // ����
		cv::Point2f(0+50,512-50), // ����
		cv::Point2f(512-50,0+50), // �E��
		cv::Point2f(512-50,512-50) // �E��
	};

	// homography�s����v�Z
	const cv::Mat homography = cv::getPerspectiveTransform(src_pos,dst_pos);

	// �����ϊ�
	cv::warpPerspective( src, dst, homography,dst.size());

	// �摜�̕\��
	cv::namedWindow("image", cv::WINDOW_AUTOSIZE);
	cv::imshow("image", dst);

	// �L�[���͂�ҋ@
	cv::waitKey(0);

	// �쐬�����E�B���h�E��S�Ĕj��
	cv::destroyAllWindows();
}

#if 1
int main()
{
	trans_homography();
	
	return 0;
}
#endif
