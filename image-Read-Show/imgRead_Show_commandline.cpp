#include<iostream>
#include"opencv2\core\core.hpp"
#include"opencv2\highgui\highgui.hpp"
using namespace cv;
using namespace std;
/*������ģʽ���򣬿���������.exe�ļ�ʱ����ͼƬ·����
argcΪ����������argv[0]��ʾ���������ĵ�ַ��argv[1]��ʾ��һ��������argv[2]��ʾ�ڶ�������
���籾������������imgRead_Show.exe�ļ����������������ģʽ�����У�
imgRead_Show.exe D:\\1.jpg D:\\2.jpg
*/
int main(int argc,char** argv){
	/*opencv2�汾������ṹMat������imread(),nameWindow(),imshow()*/
	Mat img1=imread(argv[1]);   //ע����˫��б��,���������ͼƬ
	if(!img1.data) {cout<<"error1";return -1;}   //�����û�ж���ͼƬ
	namedWindow("ͼƬ1");//�������������ڶ�����Ĭ���β�
	imshow("ͼƬ1",img1);

	/*opencv�ϰ汾�����ݽṹIplImage������cvLoadImage(),cvNamedWindow(),cvShowImage()*/
	IplImage* img2=cvLoadImage(argv[2]);
	if(!img2)  {cout<<"error2";return -1;} 
	cvNamedWindow("ͼƬ2");
	cvShowImage("ͼƬ2",img2);

	waitKey(0);
	return 0;
}