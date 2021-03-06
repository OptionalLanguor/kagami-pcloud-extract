#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <cstdio>
#include <string>

using namespace cv;

int main (int argc, char** argv) {

	printf("\nkagami-pcloud-extract\n\n");

	if (argc != 2) {
		printf("Please, send an image as argument.\n");
		//return -1;

		// assuming default value
		argv[1] = (char*)(std::string("simple-dataset/ground-truth/0000000410.png")).c_str();
 	}
	printf("Directory: \"%s\"\n", argv[1]);

	Mat image = imread(argv[1], 1);
	// imread second parameter: Flags specifying the color type of a loaded image
  //  CV_LOAD_IMAGE_ANYDEPTH - If set, return 16-bit/32-bit image when the input has the corresponding depth, otherwise convert it to 8-bit.
  //  CV_LOAD_IMAGE_COLOR - If set, always convert image to the color one
  //  CV_LOAD_IMAGE_GRAYSCALE - If set, always convert image to the grayscale one
  //  >0 Return a 3-channel color image.
  //      Note
  //      In the current implementation the alpha channel, if any, is stripped from the output image. Use negative value if you need the alpha channel.
  //  =0 Return a grayscale image.
  //  <0 Return the loaded image as is (with alpha channel).

	if ( !image.data ) {
		printf("No image data \n");
  	return -1;
	}
	else printf("Opening image \"%s\"...\n", argv[1]);

	namedWindow("Display Original Image", WINDOW_AUTOSIZE );
	imshow("Display Original Image", image);

	waitKey(0); // wait key to close display window

 	return 0;
}
