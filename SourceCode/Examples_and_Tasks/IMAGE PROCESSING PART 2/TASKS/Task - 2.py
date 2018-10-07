import cv2
import numpy as np

image = cv2.imread(r'C:\Users\Lenovo\Desktop\GENESIS\IMAGES FOR IP\images.png')
gray = cv2.cvtColor(image,cv2.COLOR_BGR2GRAY)

ret , thresh = cv2.threshold( gray, 127,  255, 0)

kernel = np.ones((5,5),np.uint8)
erosion = cv2.erode(thresh , kernel, iterations= 1)

dilation = cv2.dilate(thresh , kernel, iterations = 1)

opening = cv2.morphologyEx(thresh, cv2.MORPH_OPEN , kernel)
closing = cv2.morphologyEx(thresh , cv2.MORPH_CLOSE , kernel)

cv2.imshow( 'opening ' , opening )
cv2.imshow( 'closing ' , closing )
cv2.imshow( 'dilation ' , dilation )
cv2.imshow( 'erosion ' , erosion )
cv2.imshow(' binary image ' , thresh)

cv2.waitKey(0)
cv2.destroyAllWindows()
