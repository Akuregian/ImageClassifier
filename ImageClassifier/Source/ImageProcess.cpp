#include "../Header/ImageProcess.hpp"

void ImageProccess::ShowImage(std::string path) {
    cv::Mat Image = cv::imread(path, cv::IMREAD_COLOR);
    cv::imshow("Image Window", Image);
    int k = cv::waitKey(0);
    if(k == 'c') { cv::destroyAllWindows(); }
};

void ImageProccess::ResizeImages(std::string folder_path) {
    std::vector<std::string> filenames;
    cv::glob(folder_path, filenames);

    for(size_t i = 0; i <filenames.size(); i++) {
        cv::Mat Image = cv::imread(filenames[i], cv::IMREAD_COLOR);
        cv::resize(Image, Image, cv::Size(256, 256));
        cv::imwrite(filenames[i], Image);
    }
};