# define _CRT_SECURE_NO_WARNINGS
# define _USE_MATH_DEFINES
# include <iostream>
# include <cmath>
# include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;
string win_src = 'src';
string win_src = 'dst';

int main()
{
    string file_src = 'src.png';//入力画像名
    string file_dst = 'dst.png';//出力画像名
    Mat img_src = imread(file_src, 0);//入力画像の読み込み

    Mat img_dst;
    if(!img_src.data)
    {
        cout << 'error, no image data' << endl;
        return -1;
    }

    //ウィンドウ生成
    namedWindow(win_src, WINDOW_AUTOSIZE);
    namedWindow(win_dst, WINDOW_AUTOSIZE);

    //画像処理





}    

