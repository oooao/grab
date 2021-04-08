using App_3.ViewModels;
using System.ComponentModel;
using Xamarin.Forms;

namespace App_3.Views
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