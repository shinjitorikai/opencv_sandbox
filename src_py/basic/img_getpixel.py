import numpy as np
import cv2

img = cv2.imread('./test.png')

# 補足 : numpy配列を利用してもよいが、速度があまり高くないとのこと

# pixel値の参照(B,G,Rの順)
print('img.item(10,20,0) : ',img.item(10,20,0)) # B
print('img.item(10,20,0) : ',img.item(10,20,1)) # G
print('img.item(10,20,0) : ',img.item(10,20,2)) # R

# pixel値の設定
img.itemset((10,20,0),123)

#cv2.imshow('test',img)

#cv2.waitKey()
#cv2.destroyAllWindows()
