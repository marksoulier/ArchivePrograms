import pyautogui
# click on thinkorswim
pyautogui.moveTo(611, 745, duration= 0.1)
pyautogui.click(611, 745, button='left')
pyautogui.PAUSE = 1
# click on studies
pyautogui.moveTo(1193, 74, duration= 0.1)
pyautogui.click(1193, 74, button='left')
# click on edit studies
pyautogui.moveTo(1190, 162, duration= 0.1)
pyautogui.click(1190, 162, button='left')
# click on statagies
pyautogui.moveTo(367, 164, duration= 0.1)
pyautogui.click(367, 164, button='left')
# click on next statagie
pyautogui.moveTo(390, 213, duration= 0.1)
pyautogui.click(390, 213, button='left')
for l in range(i):
    pyautogui.press('down')
# add selected
pyautogui.moveTo(318, 532, duration= 0.1)
pyautogui.click(318, 532, button='left')
# delete last statagie
pyautogui.moveTo(1070, 224, duration= 0.1)
pyautogui.click(1070, 224, button='left')
# exit out of edit studies
pyautogui.moveTo(1087, 141, duration= 0.1)
pyautogui.click(1087, 141, button='left')
# click on apple
pyautogui.moveTo(319, 77, duration=0.01)
pyautogui.click(319, 77, button='left')
pyautogui.press('enter')