
import pandas as pd
data = pd.Series(['45', '87', 'f', '56', '125'])

data_digit=pd.to_numeric(data,errors='coerce').dropna().astype(int)
print(data_digit)

