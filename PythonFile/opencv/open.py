import cv2 as cv
import numpy as np
W = 700
def my_ellipse(img, angle):
    thickness = 2
    line_type = 8
    cv.ellipse(img,
                (W // 2, W // 2),
                (W // 4, W // 16),
                angle,
                0,
                360,
                (255, 0, 0),
                thickness,
                line_type)
def my_filled_circle(img, center):
    thickness = -1
    line_type = 8
    cv.circle(img,
               center,
               W // 32,
               (0, 0, 255),
               thickness,
               line_type)


atom_window = "Drawing 1: Atom"

# Create black empty images
size = W, W, 3
atom_image = np.zeros(size, dtype=np.uint8)

# 1.a. Creating ellipses
my_ellipse(atom_image, 90)
my_ellipse(atom_image, 0)
my_ellipse(atom_image, 45)
my_ellipse(atom_image, -45)
# 1.b. Creating circles
my_filled_circle(atom_image, (W // 2, W // 2))


cv.imshow(atom_window, atom_image)
cv.moveWindow(atom_window, 0, 200)

cv.waitKey(0)
cv.destroyAllWindows()