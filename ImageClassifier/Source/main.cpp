#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
    std::cout << "Hello\n";
    cv::Mat Image = cv::imread("C:/Users/Antho/OneDrive/Desktop/test.jpg", cv::IMREAD_COLOR);
    cv::imshow("Image Window", Image);
    int k = cv::waitKey(0);
    if(k == 'c') { cv::destroyAllWindows(); }
    return 0;

}