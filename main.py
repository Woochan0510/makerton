import cv2 
import numpy as np
import openvino as ov
import tensorflow as tf

model_xml = ""
model_bin = ""

ie = ov.Core()
net = ie.read_model(model=model_xml)
compiled_model = ie.compile_model(model=net, device_name="CPU")

