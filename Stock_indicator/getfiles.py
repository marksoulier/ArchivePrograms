import pyautogui
# click on thinkorswim
pyautogui.moveTo(611, 745, duration= 0.1)
pyautogui.click(611, 745, button='left')
pyautogui.PAUSE = 1
for o in range(x):
# click on button
	pyautogui.moveTo(0, 300, duration= 0.01)
	pyautogui.PAUSE = 5
	x, y, z, a = pyautogui.locateOnScreen('button.png')
	pyautogui.moveTo(x+34, y-10, duration=0.01)
	pyautogui.click(x+34, y-10, button='right')
# click on show report
	pyautogui.moveRel(10, 83, duration=0.01)
	pyautogui.click(x+44, y+83, button='left')
#click on export file
	pyautogui.moveTo(979, 603, duration= 0.01)
	pyautogui.click(979, 603, button='left')
#click on documents
	pyautogui.moveTo(648, 237, duration= 0.01)
	pyautogui.click(648, 237, button='left')
#click on thinkor excel
	for i in range(9):
		pyautogui.press('down')
	pyautogui.press('enter')
#click on stratagie program
	pyautogui.moveTo(484, 274, duration= 0.01)
	pyautogui.click(484, 274, button='left')
#click on open	
	pyautogui.moveTo(817, 511, duration= 0.01)
	pyautogui.click(817, 511, button='left')
#click on strat
	pyautogui.moveTo(487, 272, duration= 0.01)
	pyautogui.click(487, 272, button='left')
	i -= 1
	for l in range(i):
		pyautogui.press('down')
#click on open
	pyautogui.moveTo(817, 511, duration= 0.01)
	pyautogui.click(817, 511, button='left')
#click on save
	pyautogui.moveTo(817, 511, duration= 0.01)
	pyautogui.click(817, 511, button='left')
#To say yes to replace old file
	pyautogui.moveTo(749, 133, duration= 0.01)
	pyautogui.click(749, 133, button='left')
# click on exit
	pyautogui.moveTo(1066, 108, duration= 0.01)
	pyautogui.click(1066, 108, button='left')
#click on next stock
	pyautogui.moveTo(319, 77, duration= 0.01)
	pyautogui.click(319, 77, button='left')
	pyautogui.press('down')
	pyautogui.press('enter')




	

