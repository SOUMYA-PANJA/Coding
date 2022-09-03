import time
import cv2

cam = cv2.VideoCapture(0)
f = open('count.txt','r')

# start = time.time()
# tr = 2 # run for 2 seconds
count = f.read()
count = int(count)
th = 20 + count
while(count < th):
    st = f'./static/file{count}.png'
    res, img = cam.read()
    cv2.imwrite(st, img)
    count += 1
f.close()

f = open('count.txt', 'w')
f.write(str(count))
f.close()

