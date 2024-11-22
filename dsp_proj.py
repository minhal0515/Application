import matplotlib.pyplot as plt
from scipy.misc import electrocardiogram
  
import numpy as np
  
ecg = electrocardiogram()
  
frequency = 360
  
time_data = np.arange(ecg.size) / frequency
  
plt.plot(time_data, ecg)
plt.xlabel("time in seconds")
plt.ylabel("ECG in milli Volts")
  
plt.show()
import matplotlib.pyplot as plt
from scipy.misc import electrocardiogram
  
import numpy as np
  
ecg = electrocardiogram()
  
frequency = 360
  
time_data = np.arange(ecg.size) / frequency
  
plt.plot(time_data, ecg)
plt.xlabel("time in seconds")
plt.ylabel("heart rate in milli Volts")
plt.xlim(9, 10.2)
plt.ylim(-1, 1.5)
# display
plt.show()