#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"

#include "winrt/Microsoft.UI.Text.h"
#include "string"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI;
using namespace Microsoft::UI::Text;
using namespace Microsoft::UI::Xaml::Controls;
using namespace Microsoft::UI::Xaml::Media;
using namespace Microsoft::UI::Xaml::Shapes;
using namespace std;


// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.
Windows::UI::Color currentColor = Colors::Green();
namespace winrt::Split::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();
        myRichEditBox().Document().Selection().CharacterFormat().ForegroundColor(currentColor);
    }

    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

}

void winrt::Split::implementation::MainWindow::myColorButton_Click(winrt::Microsoft::UI::Xaml::Controls::SplitButton sender, winrt::Microsoft::UI::Xaml::Controls::SplitButtonClickEventArgs args)
{
    Border border = unbox_value<Border>(sender.Content());
    auto border1 = border.Background();
    SolidColorBrush color1 = unbox_value<SolidColorBrush>(border1);
    auto color = color1.Color();

    myRichEditBox().Document().Selection().CharacterFormat().ForegroundColor(color);
    currentColor = color;
}


void winrt::Split::implementation::MainWindow::GridView_ItemClick(winrt::Windows::Foundation::IInspectable sender, winrt::Microsoft::UI::Xaml::Controls::ItemClickEventArgs e)
{
    Shapes::Rectangle rect = unbox_value<Shapes::Rectangle>(e.ClickedItem());
    auto rect1 = rect.Fill();
    SolidColorBrush color1 = unbox_value<SolidColorBrush>(rect1);
    auto color = color1.Color();
    myRichEditBox().Document().Selection().CharacterFormat().ForegroundColor(color);
    CurrentColor().Background(SolidColorBrush(color));

    myRichEditBox().Focus(Microsoft::UI::Xaml::FocusState::Keyboard);
    currentColor = color;
}

void winrt::Split::implementation::MainWindow::myRichEditBox_TextChanged(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    if (myRichEditBox().Document().Selection().CharacterFormat().ForegroundColor() != currentColor) {
        myRichEditBox().Document().Selection().CharacterFormat().ForegroundColor(currentColor);
    }
}

void winrt::Split::implementation::MainWindow::Red_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    currentColor = Colors::Red();
    myRichEditBox().Document().Selection().CharacterFormat().ForegroundColor(currentColor);
    CurrentColor().Background(SolidColorBrush(currentColor));

    myColorButtonReveal().Flyout().Hide();
}


void winrt::Split::implementation::MainWindow::Orange_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    currentColor = Colors::Orange();
    myRichEditBox().Document().Selection().CharacterFormat().ForegroundColor(currentColor);
    CurrentColor().Background(SolidColorBrush(currentColor));

    myColorButtonReveal().Flyout().Hide();
}


void winrt::Split::implementation::MainWindow::Yellow_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    currentColor = Colors::Yellow();
    myRichEditBox().Document().Selection().CharacterFormat().ForegroundColor(currentColor);
    CurrentColor().Background(SolidColorBrush(currentColor));

    myColorButtonReveal().Flyout().Hide();
}


void winrt::Split::implementation::MainWindow::Green_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    currentColor = Colors::Green();
    myRichEditBox().Document().Selection().CharacterFormat().ForegroundColor(currentColor);
    CurrentColor().Background(SolidColorBrush(currentColor));

    myColorButtonReveal().Flyout().Hide();
}


void winrt::Split::implementation::MainWindow::Blue_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    currentColor = Colors::Blue();
    myRichEditBox().Document().Selection().CharacterFormat().ForegroundColor(currentColor);
    CurrentColor().Background(SolidColorBrush(currentColor));

    myColorButtonReveal().Flyout().Hide();
}


void winrt::Split::implementation::MainWindow::Indigo_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    currentColor = Colors::Indigo();
    myRichEditBox().Document().Selection().CharacterFormat().ForegroundColor(currentColor);
    CurrentColor().Background(SolidColorBrush(currentColor));

    myColorButtonReveal().Flyout().Hide();
}


void winrt::Split::implementation::MainWindow::Violet_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    currentColor = Colors::Violet();
    myRichEditBox().Document().Selection().CharacterFormat().ForegroundColor(currentColor);
    CurrentColor().Background(SolidColorBrush(currentColor));

    myColorButtonReveal().Flyout().Hide();
}


void winrt::Split::implementation::MainWindow::Gray_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    currentColor = Colors::Gray();
    myRichEditBox().Document().Selection().CharacterFormat().ForegroundColor(currentColor);
    CurrentColor().Background(SolidColorBrush(currentColor));

    myColorButtonReveal().Flyout().Hide();
}


void winrt::Split::implementation::MainWindow::Black_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    currentColor = Colors::Black();
    myRichEditBox().Document().Selection().CharacterFormat().ForegroundColor(currentColor);
    CurrentColor().Background(SolidColorBrush(currentColor));

    myColorButtonReveal().Flyout().Hide();
}
