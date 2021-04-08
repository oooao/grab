using App_2.ViewModels;
using System.ComponentModel;
using Xamarin.Forms;

namespace App_2.Views
{
    public partial class ItemDetailPage : ContentPage
    {
        public ItemDetailPage()
        {
            InitializeComponent();
            BindingContext = new ItemDetailViewModel();
        }
    }
}