#include <stdio.h>
#include <stdbool.h>

#ifdef OPEN_CV
#include <opencv4/opencv2/opencv.hpp>
#include <opencv4/opencv2/imgcodecs.hpp>

#endif

typedef unsigned int t_flag;

#define FLAG_A (1 << 0)
#define FLAG_B (1 << 1)
#define FLAG_C (1 << 2)

int example(int x, bool is_added, bool is_squared, bool is_not)
{
    if (is_added)
        x += x;
    if (is_squared)
        x *= x;
    if (is_not)
        x = ~x;

    return x;
}

int example_flag(int x, t_flag flag_ops)
{
    if (flag_ops & FLAG_A)
        x += x;
    if (flag_ops & FLAG_B)
        x *= x;
    if (flag_ops & FLAG_C)
        x = ~x;

    return x;
}

void normal_way()
{
    printf("%d\n", example(213, false, false, false));
    printf("%d\n", example(213, true, false, false));
    printf("%d\n", example(213, false, true, false));
    printf("%d\n", example(213, false, false, true));
    printf("%d\n", example(213, true, true, false));
}

void bit_flag_way()
{
    printf("%d\n", example_flag(213, 0));
    printf("%d\n", example_flag(213, FLAG_A));
    printf("%d\n", example_flag(213, FLAG_B));
    printf("%d\n", example_flag(213, FLAG_C));
    printf("%d\n", example_flag(213, FLAG_A | FLAG_B));
}

#ifdef OPEN_CV
using namespace cv;
/**
 * @brief Function to take an image and read it and save it in PNG format with most compressed setting available.
 *
 * Also as we have read the image in Grayscale format, we will have output PNG image in Grayscale as well.
 *
 */
void opencv_example()
{
    Mat image = imread("/home/manoj/Downloads/exif-batch-output-1.jpeg", IMREAD_GRAYSCALE);

    imwrite("/home/manoj/Downloads/exif-batch-output-1.png", image, {IMWRITE_PNG_COMPRESSION, 9});

    printf("Image saved");
}
#endif

int main(void)
{
    printf("Example \n");
    normal_way();
    printf("Bit Flag Example \n");
    bit_flag_way();

#ifdef OPEN_CV
    printf("OPENCV Example \n");

    opencv_example();
#endif

    return 0;
}