import cv2
import numpy as np
import matplotlib.pyplot as plt


img = cv2.imread('E:\Project 2020\py\watch.jpg',cv2.IMREAD_GRAYSCALE)

cv2.imshow('image', img)

plt.imshow(img, cmap='gray', interpolation='bicubic')
plt.plot([50,100],[80,100],'c',linewidth=0)
plt.show()
cv2.waitKey(0)
cv2.destroyAllWindows()

#cv2.imwrite('E:\Project 2020\py\watch.jpg', img)
