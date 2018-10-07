import cv2

image = cv2.imread(r'C:\Users\Lenovo\Desktop\GENESIS\IMAGES FOR IP\images.png')
gray = cv2.cvtColor(image,cv2.COLOR_BGR2GRAY)

ret , thresh = cv2.threshold( gray, 127,  255, 0)

_ , contours, _  = cv2.findContours(thresh , cv2.RETR_TREE , cv2.CHAIN_APPROX_SIMPLE)

img = cv2.drawContours(image, contours , -1 , (0,255,0) , 3)

cnt = contours[0]

(x , y) , radius = cv2.minEnclosingCircle(cnt)
center = (int(x) , int(y))
radius = int(radius)
img = cv2.circle(img , center , radius , (255,0,0) , 2)

cv2.imshow( 'contours ' , img )
cv2.imshow(' binary image ' , thresh)

cv2.waitKey(0)
cv2.destroyAllWindows()
