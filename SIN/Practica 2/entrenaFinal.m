function void = entrenaFinal(file)  load(file);  [w,E,k]=perceptron(data,1000); [E k]  save_precision(4);  save("OCR_14x14_w","w");endfunction