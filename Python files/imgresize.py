  
from scipy.misc import imread, imsave, imresize 
  
# Read a JPEG image into a numpy array 
img = imread('123.jpg') # path of the image 
print(img.dtype, img.shape) 
  
# Tinting the image 
img_tint = img * [1, 0.45, 0.3] 
  
# Saving the tinted image 
imsave('1234.jpg', img_tint) 
  
# Resizing the tinted image to be 300 x 300 pixels 
img_tint_resize = imresize(img_tint, (300, 300)) 
  
# Saving the resized tinted image 
imsave('D:/Programs / cat_tinted_resized.jpg', img_tint_resize)