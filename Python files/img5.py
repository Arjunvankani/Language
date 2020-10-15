# Python program to illustrate 
# Otsu thresholding type on an image 

# organizing imports 
import cv2       
import numpy as np   

# path to input image is specified and 
# image is loaded with imread command 
image1 = cv2.imread('img.jpg') 

# cv2.cvtColor is applied over the 
# image input with applied parameters 
# to convert the image in grayscale 
img = cv2.cvtColor(image1, cv2.COLOR_BGR2GRAY) 

# applying Otsu thresholding 
# as an extra flag in binary 
# thresholding   
ret, thresh1 = cv2.threshold(img, 120, 255, cv2.THRESH_BINARY +
                                            cv2.THRESH_OTSU)     

# the window showing output image        
# with the corresponding thresholding        
# techniques applied to the input image  
cv2.imshow('Otsu Threshold', thresh1)        
    
# De-allocate any associated memory usage        
if cv2.waitKey(0) & 0xff == 27: 
    cv2.destroyAllWindows()  
