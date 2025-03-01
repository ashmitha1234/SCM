"""Create a pie chart showing the percentage distribution of a survey where 40% prefer Option A, 30% prefer Option B, 20% prefer Option C, and 10% prefer Option D. Hint: Use plt.pie() to create a pie chart.
"""
 
import matplotlib.pyplot as plt

labels = ['Option A', 'Option B', 'Option C', 'Option D']
sizes = [40, 30, 20, 10]

plt.pie(sizes, labels=labels, autopct='%1.1f%%', startangle=90)
plt.title('Survey Results')
plt.show()

