import numpy as np
import cv2

img = cv2.imread('./test.png')

print('img type : ',type(img))
print('img.shape : ',img.shape)
print('img.dtype : ',img.dtype)
print('img.size : ',img.size)

#cv2.imshow('test',img)

#cv2.waitKey()
#cv2.destroyAllWindows()
