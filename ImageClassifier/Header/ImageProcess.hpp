#pragma once
#include <opencv2/opencv.hpp>
#include <vector>

class ImageProccess {
    public: 
        ImageProccess() {};
        void ShowImage(std::string path);
        void ResizeImages(std::string folder_path);
};
