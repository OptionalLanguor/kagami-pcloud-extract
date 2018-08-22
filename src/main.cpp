#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <cstdio>

using namespace cv;

int main (int argc, char** argv) {

	printf("\nkagami-pcloud-extract\n\n");

	if (argc != 2)
 	{
		printf("Send as argument an image.\n");
		return -1;
 	}
	printf("Image sent as argument: \"%s\"\n", argv[1]);

	Mat image;

	image = imread(argv[1], CV_LOAD_IMAGE_ANYDEPTH);

	if ( !image.data )
  {
		printf("No image data \n");
    return -1;
	}

	namedWindow("Display Original Image", WINDOW_AUTOSIZE );
	imshow("Display Original Image", image);

 	return 0;
}
