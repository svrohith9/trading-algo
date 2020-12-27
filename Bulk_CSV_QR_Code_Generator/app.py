# -*- coding: utf-8 -*-
"""
Created on Sun Dec 27 19:57:50 2020

@author: svrohith9
"""

import qrcode 
import csv


file = open('~~CSV filepath~~')
data = csv.reader(file)


for row in data:
#     print(row[3])
     img = qrcode.make(row[10])        
     img.save('~~Export Filepath~~'+str(row[3])+'.png') 





