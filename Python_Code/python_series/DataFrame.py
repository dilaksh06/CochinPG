import pandas as pd

# Sample DataFrame
data = {
    'Date': ['2024-01-01', '2024-01-01', '2024-01-02', '2024-01-02'],
    'City': ['New York', 'Chicago', 'New York', 'Chicago'],
    'Temperature': [32, 28, 30, 25]
}

df = pd.DataFrame(data)

# Pivot: 'Date' becomes the index, 'City' becomes columns, and 'Temperature' becomes values
pivoted = df.pivot(index='Date', columns='City', values='Temperature')
print(pivoted)
