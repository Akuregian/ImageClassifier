#include <iostream>
#include "../Header/ImageProcess.hpp"

std::shared_ptr<ImageProccess> img_process = std::make_shared<ImageProccess>();

int main() {
    img_process->ShowImage("C:/Users/Antho/OneDrive/Desktop/random_test_images/test1.jpg");
    img_process->ShowImage("C:/Users/Antho/OneDrive/Desktop/random_test_images/test2.jpg");
    img_process->ResizeImages("C:/Users/Antho/OneDrive/Desktop/random_test_images");
    img_process->ShowImage("C:/Users/Antho/OneDrive/Desktop/random_test_images/test1.jpg");
    img_process->ShowImage("C:/Users/Antho/OneDrive/Desktop/random_test_images/test2.jpg");
    return 0;

}