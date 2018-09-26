import cv2

cap = cv2.VideoCapture(0)

while (True) :
    _ , frame = cap.read()

    if cv2.waitKey(1) & 0xFF == ord('s'):
        cv2.imshow(' saved frame ' , frame )

    cv2.imshow(' show video ' , frame)
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break 

cap.release()
cv2.destroyAllWindows()
